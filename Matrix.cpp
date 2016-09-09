//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Matrix.res");
USEFORM("_forms\Principal.cpp", FPrincipal);
USEFORM("_forms\EstadoError.cpp", Errores);
USEFORM("_forms\Acceso.cpp", FAcceso);
USEFORM("_forms\AjusteCero.cpp", FAjusteCero);
USEFORM("_forms\Asistente.cpp", FAsistente);
USEFORM("_vision\forms\AyudaCalColor.cpp", FAyudaCalColor);
USEFORM("_vision\forms\CajaColor.cpp", FCajaColor);
USEFORM("_vision\forms\CalColor.cpp", FCalColor);
USEFORM("_forms\CalibradoPeso.cpp", FCalibradoPeso);
USEFORM("_vision\forms\CalTamano.cpp", FCalTamno);
USEFORM("_forms\Clave.cpp", FClave);
USEFORM("_forms\CoeficientesPesado.cpp", FCoeficientesPesado);
USEFORM("_forms\UComparaConf.cpp", FComparaConf);
USEFORM("_forms\ConfigElectroimanes.cpp", FConfigElectroimanes);
USEFORM("_forms\ConfigEncoder.cpp", FConfigEncoder);
USEFORM("_forms\ConfigPesado.cpp", FConfigPesado);
USEFORM("_forms\ConfigSerie.cpp", FConfigSerie);
USEFORM("_forms\Configuracion.cpp", FConfiguracion);
USEFORM("_forms\ConfigurarGrafico.cpp", FConfigurarGrafico);
USEFORM("_forms\ConfigVariadores.cpp", FConfigVariadores);
USEFORM("_forms\ConfigVision.cpp", FConfigVision);
USEFORM("_forms\UConflictos.cpp", FConflictos);
USEFORM("_forms\ContarTazas.cpp", FContarTazas);
USEFORM("_forms\UControlProp.cpp", FControlProp);
USEFORM("_vision\forms\EditaDefectos.cpp", FEditaDefectos);
USEFORM("_forms\EditClaseColor.cpp", FEditClaseColor);
USEFORM("_forms\FinalPartida.cpp", FFinalPartida);
USEFORM("_forms\InfoSalida.cpp", FInfoSalida);
USEFORM("_forms\Limites.cpp", FLimites);
USEFORM("_forms\logform.cpp", FLogForm);
USEFORM("_forms\NuevoGrupo.cpp", FNuevoGrupo);
USEFORM("_vision\forms\NuevoGrupoColor.cpp", FNuevoGrupoColor);
USEFORM("_forms\nuevogrupopeso.cpp", FNuevoGrupoPeso);
USEFORM("_forms\NuevoGrupoTamano.cpp", FNuevoGrupoTamano);
USEFORM("_vision\forms\NuevoMapaColor.cpp", FNuevoMapaColor);
USEFORM("_forms\NuevoPrograma1.cpp", FNuevoPrograma1);
USEFORM("_forms\NuevoPrograma4.cpp", FNuevoPrograma4);
USEFORM("_forms\NuevoPrograma2.cpp", FNuevoPrograma2);
USEFORM("_forms\NuevoPrograma3.cpp", FNuevoPrograma3);
USEFORM("_forms\PlanoElectroimanes.cpp", FPlanoElectroimanes);
USEFORM("_forms\PlanoVision.cpp", FPlanoVision);
USEFORM("_forms\PlanoEncoder.cpp", FPlanoEncoder);
USEFORM("_forms\PlanoGenericas.cpp", FPlanoGenericas);
USEFORM("_forms\PlanoPesado.cpp", FPlanoPesado);
USEFORM("_forms\PlanoVariador.cpp", FPlanoVariador);
USEFORM("_vision\forms\Rejilla.cpp", FRejilla);
USEFORM("_forms\seguimiento.cpp", FSeguimiento);
USEFORM("_forms\Salidas.cpp", FSalidas);
USEFORM("_forms\sincronismos.cpp", FSincronismos);
USEFORM("_forms\UTranslateForm.cpp", FTranslateForm);
USEFORM("_forms\tarar.cpp", FTarar);
USEFORM("_forms\ValorTaras.cpp", FValorTaras);
USEFORM("_forms\VerificacionPesado.cpp", FVerificacionPesado);
USEFORM("_vision\forms\VisorTReal.cpp", FVisor);
USEFORM("_vision\forms\ZoomMapaCol.cpp", FZoomMapa);
USEFORM("_forms\Productores.cpp", GestionProductores);
USEFORM("_forms\Botones.cpp", TBoton);
USEUNIT("_clases\ClasesConfigSerie.cpp");
USEUNIT("_clases\ClasesConfig.cpp");
USEUNIT("_vision\CLASES\ClasesConfigVis.cpp");
USEUNIT("_clases\ClasesEstadisticas.cpp");
USEUNIT("_clases\ClasesEstado.cpp");
USEUNIT("_clases\ClasesMantBase.cpp");
USEUNIT("_clases\ClasesGrupos.cpp");
USEUNIT("_clases\ClasesMant.cpp");
USEUNIT("_clases\ClasesSalidas.cpp");
USEUNIT("_vision\auxiliar\ClusterColor.cpp");
USE("defines.h", File);
USEUNIT("_auxilar\global.cpp");
USEUNIT("_vision\auxiliar\ImpurityMeasures.cpp");
USE("_INCLUDE\LZ8200.H", File);
USE("Cfg\MAQUINA.INI", File);
USE("_clases\MensajesLAN.h", File);
USEUNIT("_forms\MTrackBar.cpp");
USEFORM("_forms\NuevoElemento.cpp", NuevoElementoPlano);
USEUNIT("_forms\ROUNDBUTTON.CPP");
USEUNIT("_clases\TComSerie.cpp");
USEUNIT("_clases\TComLan.cpp");
USEUNIT("_clases\TComPorts.cpp");
USEUNIT("_clases\TCopiaGruposColor.cpp");
USEUNIT("_clases\TCrearMsg.cpp");
USEUNIT("_clases\TGUICabecera.cpp");
USEUNIT("_clases\TElectros.cpp");
USEUNIT("_clases\TEncoder.cpp");
USEUNIT("_clases\TGenericas.cpp");
USEUNIT("_clases\TGUIPartida.cpp");
USEUNIT("_clases\TGUIGrupos.cpp");
USEUNIT("_clases\TGUIProgramas.cpp");
USEUNIT("_clases\THost.cpp");
USEUNIT("_clases\TLanServer.cpp");
USEUNIT("_clases\TLogSistema.cpp");
USEUNIT("_vision\CLASES\TMensajesVision.cpp");
USEUNIT("_clases\TMsgData.cpp");
USEUNIT("_clases\TPaneles.cpp");
USEUNIT("_clases\TPanelSecundario.cpp");
USEUNIT("_clases\TPLCs.cpp");
USEUNIT("_clases\TPesado.cpp");
USEUNIT("_clases\TProcesarMsg.cpp");
USE("_vision\auxiliar\treedef.h", File);
USEUNIT("_vision\auxiliar\TreeUtil.cpp");
USEUNIT("_clases\TTranslation.cpp");
USEUNIT("_clases\TVision.cpp");
USEUNIT("_clases\TVariadores.cpp");
USEUNIT("_vision\auxiliar\Util.cpp");
USEUNIT("_vision\CLASES\visclases.cpp");
USEUNIT("_vision\auxiliar\visfun.cpp");
USE("_vision\auxiliar\visdefines.h", File);
USEFORM("_vision\forms\sobreescr.cpp", Form1);
USEFORM("_forms\IPDetectada.cpp", FIPDetectada);
USEFORM("_forms\ConfigEntorno.cpp", FConfigEntorno);
USEUNIT("_clases\ClasesConfigEntorno.cpp");
USEFORM("_forms\UActualizacion.cpp", frmActualizacion);
USEUNIT("_clases\ClasesEntidades.cpp");
USEUNIT("_clases\TFinsNode.cpp");
USE("_clases\MensajesFINS.h", File);
USEFORM("_forms\UMonitorTiempos.cpp", FMonitorTiempos);
USEUNIT("_clases\TSocketFin.cpp");
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "Matrix";
                 Application->CreateForm(__classid(TFPrincipal), &FPrincipal);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
